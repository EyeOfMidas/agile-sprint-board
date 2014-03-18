<?php
class StorySaveController implements IController {

	public function execute(Form $form) {
		
		// TODO: clean posted data
		$id = $form->get('s');
		$text = $form->post('story');
		$details = $form->post('details');
		$estimateId = $form->post('estimate_id');
		
		$storyData = array(
			'story_id' => $id,
			'text' => $text,
			'details' => $details,
			'estimate_id' => $estimateId
		);
		$board = new Board();
		$board->load();
		$story = $board->getStoryById($id);
		
		$story->populate($storyData);
		$story->update();
		
		$header = new Header();
		$header->redirect('/');
	}
}