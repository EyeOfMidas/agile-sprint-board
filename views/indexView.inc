<?php include "headerView.inc"?>
<header>
	<h1>Agile Sprint Board</h1>
</header>
<section id="board_container">
	<div id="board">
		<div class="column">
			<h3>Backlog</h3>
			<ul id="backlog" class="connectedSortable">
				<li class="userStory">Backlog item 1<div class="estimate">3</div></li>
			</ul>
		</div>
		<div class="column">
			<h3>To Do</h3>
			<ul id="todo" class="connectedSortable">
				<li class="userStory">To do item 1<div class="estimate">1</div></li>
			</ul>
		</div>
		<div class="column">
			<h3>In Progress</h3>
			<ul id="inprogress" class="connectedSortable">
				<li class="userStory">in progress item 1<div class="estimate">8</div></li>
			</ul>
		</div>
		<div class="column">
			<h3>Done</h3>
			<ul id="done" class="connectedSortable">
				<li class="userStory">done item 1<div class="estimate">13</div></li>
			</ul>
		</div>
	</div>
</section>
<?php include "footerView.inc" ?>