<?php

class ControllerFactory {

	public function create($controllerIndex) {
		switch ($controllerIndex) {
			case "changepos":
				return new ChangePositionController();
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