<?php

class StoryEditController implements IController {

	public function execute(Form $form) {
		$view = new View();
		$storyId = $form->get('s');
		
		$storyData = array();
		$storyModel = new Story();
		
		$viewData = array(
			'estimates' => array(1,2,3,5,8,13),
			'story' => $storyData 
		);
		return $view->render('storyEditView.inc', $viewData);
	}
}