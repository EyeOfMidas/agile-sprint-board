<?php

class StoryEditController implements IController {

	public function execute(Form $form) {
		$view = new View();
		$storyId = $form->get('s');
		
		$board = new Board();
		$board->load();
		$story = $board->getStoryById($storyId);
		
		$viewData = array(
			'estimates' => $board->getEstimates(),
			'story' => $story 
		);
		return $view->render('storyEditView.inc', $viewData);
	}
}