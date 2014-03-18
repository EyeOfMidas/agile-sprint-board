<?php

class StorySaveController implements IController {

	public function execute(Form $form) {
		
		// TODO: clean posted data
		$id = $form->get('s');
		$text = $form->post('story');
		$details = $form->post('details');
		$estimate = $form->post('estimate');
		
		$storyData = array(
			'story_id' => $id,
			'text' => $text,
			'details' => $details,
			'estimate' => $estimate
		);
		
		$story = new Story();
		$story->populate($storyData);
		$story->update();
		
		$header = new Header();
		$header->redirect('/');
	}
}