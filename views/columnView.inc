<div class="board_column">
	<h3><?=$column->getDisplayName()?></h3>
	<ul id="<?=$column->getName()?>" class="connectedSortable">
	<?php foreach ($column->getStories() as $story) {
			include 'storyView.inc';
			} ?>
	</ul>
</div>