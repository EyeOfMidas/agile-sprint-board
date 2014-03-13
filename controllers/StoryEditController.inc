<?php

class StoryEditController implements IController {

	public function execute(Form $form) {
		$view = new View();
		$storyId = $form->get('s');
		$viewData = array();
		return $view->render('storyEditView.inc', $viewData);
	}
}