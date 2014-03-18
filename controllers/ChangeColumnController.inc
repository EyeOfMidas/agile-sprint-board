<?php
class ChangeColumnController implements IController {

	public function execute(Form $form) {
		$storyId = $form->post("s");
		$columnId = $form->post("col");
		$story = new Story(new Board());
		$story->load($storyId);
		$story->setColumnId($columnId);
		$story->update();
	}
}