<?php
include "../config.inc";
$factory = new ControllerFactory();
$form = new Form();
echo $factory->create($form->get('c'))->execute($form);