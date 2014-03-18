<?php
class ChangePositionController implements IController {

	public function execute(Form $form) {
		$storyId = $form->post("s");
		$columnId = $form->post("col");
		$sort = $form->post("i");
		$board = new Board();
		$board->load();
		$story = $board->getStoryById($storyId);
		$story->setColumnId($columnId);
		$board->columnSort($story, $sort);
		$story->update();
	}
}