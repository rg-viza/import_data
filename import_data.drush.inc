<?php
/**
* Implements hook_drush_command().
*/
function import_data_drush_command()
{
    $items = array();
    $items['import-data'] =
    [
        'description' => 'Send stdClass object array of entities to be imported to an import plugin',
        'arguments' =>
        [
            'source_class_name' => 'Export Plugin to be loaded',
            'arr_fields' => 'Field names needed',
            'entity_name' => 'Destination fields',
            'destination_class_name'
        ],
        'drupal dependencies' => ['import_data'],
        'aliases' => ['import:data'],
    ];
    return $items;
}

/**
* Call back function drush_custom_drush_command_say_hello()
* The call back function name in the  following format
*   drush_{module_name}_{item_id_for_command}()
*/
function drush_import_data_main($source_class_name, $arr_fields, $entity_name, $destination_class_name) {
    spl_autoload_register(function ($destination_class_name) {
        include $destination_class_name . '.php';
    });
    spl_autoload_register(function ($source_class_name) {
        include $source_class_name.'.php';
    });
    $exporter = new $source_class_name($entity_name, $arr_fields);
    $entities = $exporter->export();
    $importer = new $destination_class_name($entity_name, $arr_fields);
    $importer->import($entities);

}
