<div class="board_column">
	<h3><?=$column['displayName']?></h3>
	<ul id="<?=$column['columnName']?>" class="connectedSortable">
	<?php foreach ($column['stories'] as $story) {
			include 'storyView.inc';
			} ?>
	</ul>
</div>