<?php

class IndexController implements IController{

	public function execute(Form $form) {
		$view = new View();
		
		$backlogStories = array(
			array("id" => 1, "text" => "As a project manager, I would like to attach spec notes to a user story", "details" => "", "estimate" => 1),
			array("id" => 2, "text" => "As a project manager, I would like to schedule multiple sprints, each rotating on the sprint schedule (weekly)", "details" => "", "estimate" => 3),
			array("id" => 3, "text" => "As a project manager, I would like to have the prioritized backlog automatically build up a sprint per week", "details" => "", "estimate" => 5)
		);
		$todoStories = array(
			array("id" => 4, "text" => "As a developer, I would like to estimate user stories", "details" => "", "estimate" => 2),
			array("id" => 5, "text" => "As a project manager, I would like to see the sprint \"to-do\" estimate total and the sprint \"done\" total", "details" => "", "estimate" => 2)
		);
		$inProgressStories = array(
			array("id" => 6, "text" => "As a project manager, I would like to add a new user story to the backlog", "details" => "", "estimate" => 3)
		);
		$doneStories = array(
			array("id" => 7, "text" => "As a developer, I would like to drag-and-drop a user story from \"to-do\" into \"in progress\"", "details" => "", "estimate" => 1),
			array("id" => 8, "text" => "As a developer, I would like to drag-and-drop a user story from \"in progress\" to \"done\"", "details" => "", "estimate" => 1),
			array("id" => 9, "text" => "As a project manager, I would like to drag-and-drop user stories into the sprint, prioritized (sorted)", "details" => "", "estimate" => 3),
		);
		$columns = array(array("id" => 1, "columnName" => "backlog", "displayName" => "Backlog", "stories" => $backlogStories),
		array("id" => 2, "columnName" => "todo", "displayName" => "To Do", "stories" => $todoStories),
		array("id" => 3, "columnName" => "inprogress", "displayName" => "In Progress", "stories" => $inProgressStories),
		array("id" => 4, "columnName" => "done", "displayName" => "Done", "stories" => $doneStories)
		);
		
		$viewData = array("columns" => $columns);
		return $view->render('indexView.inc', $viewData);
	}
}