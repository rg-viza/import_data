as the name suggests, this module imports data.
Details will be available here as they are defined, with a bit of lag of course.
The goal of this thing is to create a very (VERY) simple plugin based data import drush extensio
for loading data into nodes, taxonomies, solr, whatever and etc.

Blue sky-

Input Plugins:
	old drupal databases
	multimedia metadata
	flat text files (single record per file, and BigGiantFiles) delimited or one field per line.
	mysterious databases from ancient applications
	Foxpro! (Just kidding, actually I'm not)
	Solr
	R2 unit compatible holographic storage disks.
Output Plugins:
	Drupal entities
	Solr
	

Hopefully you get the idea...

Plugin design goals:
	as self configuring as possible
	as S.O.L.I.D. as possible
	usefully documented
	testable
	portable (By that I mean dependency injection)

Big picture:
	data transformation modules for other frameworks, cms, etc that can use the entire plugin ecosystem. Maybe one day developers won't need to write a bunch of stupid data transformations and reinvent the wheel every time an application is retired. As much as I love mapping fields, dealing with edge cases, and  trying to figure out why people do the stupid stuff they do, I really want to get rid of this pain point of mine, and go waterskiing or something with the time I free up.
