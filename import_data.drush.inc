<?php

/**
* Implements hook_drush_command().
*/
function import_data_drush_command()
{
    $items = array();
    $items['say-hello'] =
    [
        'description' => 'Echo the name you type with Say hello command',
        'arguments' =>
        [
            'name' => 'The name for saying hello',
        ],
        'drupal dependencies' => ['import_data'],
        'aliases' => ['say:hello'],
    ];
    return $items;
}

/**
* Call back function drush_custom_drush_command_say_hello()
* The call back function name in the  following format
*   drush_{module_name}_{item_id_for_command}()
*/
function drush_import_data_say_hello($name = '') {
    drush_print('Hello ' . $name . ' !');
}
