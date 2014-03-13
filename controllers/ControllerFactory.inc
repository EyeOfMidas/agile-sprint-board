<?php

class ControllerFactory {

	public function create($controllerIndex) {
		switch ($controllerIndex) {
			case "storyedit":
				return new StoryEditController();
			case "storysave":
				return new StorySaveController();
			case "index":
			default:
				return new IndexController();
		}
	}
}