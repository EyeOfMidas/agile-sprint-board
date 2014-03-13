<?php
define("ROOT", dirname(__FILE__));
define("LIBROOT", ROOT . "/libs/");
define("CONTROLLERROOT", ROOT . "/controllers/");
define("VIEWROOT", ROOT . "/views/");
/* ------------------- Autoloader ------------------ */
function agilesprintboard_autoload($class) {
	$classfile = $class . ".inc";
	$libFile = LIBROOT . $classfile;
	$controllerFile = CONTROLLERROOT . $classfile;
	$viewFile = VIEWROOT . $classfile;
	if (file_exists($libFile)) {
		require_once ($libFile);
	} elseif (file_exists($controllerFile)) {
		require_once ($controllerFile);
	} elseif (file_exists($viewFile)) {
		require_once ($viewFile);
	}
}
spl_autoload_register("agilesprintboard_autoload");