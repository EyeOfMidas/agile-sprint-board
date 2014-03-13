<?php include "headerView.inc"?>
<header>
	<h1>Agile Sprint Board</h1>
</header>
<section id="board_container">
	<div id="board">
		<div class="column">
			<h3>Backlog</h3>
			<ul id="backlog" class="connectedSortable">
				<li class="userStory"><div class="estimate">1</div><p class="story">As a project manager, I would like to attach spec notes to a user story</p></li>
				<li class="userStory"><div class="estimate">3</div><p class="story">As a project manager, I would like to schedule multiple sprints, each rotating on the sprint schedule (weekly)</p></li>
				<li class="userStory"><div class="estimate">5</div><p class="story">As a project manager, I would like to have the prioritized backlog automatically build up a sprint per week</p></li>
			</ul>
		</div>
		<div class="column">
			<h3>To Do</h3>
			<ul id="todo" class="connectedSortable">
				<li class="userStory"><div class="estimate">2</div><p class="story">As a developer, I would like to estimate user stories</p></li>
				<li class="userStory"><div class="estimate">2</div><p class="story">As a project manager, I would like to see the sprint "to-do" estimate total and the sprint "done" total</p></li>
			</ul>
		</div>
		<div class="column">
			<h3>In Progress</h3>
			<ul id="inprogress" class="connectedSortable">
				<li class="userStory"><div class="estimate">3</div><p class="story">As a project manager, I would like to add a new user story to the backlog</p></li>
			</ul>
		</div>
		<div class="column lastColumn">
			<h3>Done</h3>
			<ul id="done" class="connectedSortable">
				<li class="userStory"><div class="estimate">1</div><p class="story">As a developer, I would like to drag-and-drop a user story from "to-do" into "in progress"</p></li>
				<li class="userStory"><div class="estimate">1</div><p class="story">As a developer, I would like to drag-and-drop a user story from "in progress" to "done"</p></li>
				<li class="userStory"><div class="estimate">3</div><p class="story">As a project manager, I would like to drag-and-drop user stories into the sprint, prioritized (sorted)</p></li>
			</ul>
		</div>
	</div>
</section>
<?php include "footerView.inc" ?>