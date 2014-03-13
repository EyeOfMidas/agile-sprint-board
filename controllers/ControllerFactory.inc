<?php

class ControllerFactory {

	public function create($controllerIndex) {
		switch ($controllerIndex) {
			case "storyedit":
				return new StoryEditController();
			case "index":
			default:
				return new IndexController();
		}
	}
}