<?php

class ControllerFactory {

	public function create($controllerIndex) {
		switch ($controllerIndex) {
			case "index":
			default:
				return new IndexController();
		}
	}
}