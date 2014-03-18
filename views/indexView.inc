<?php

include "headerView.inc";
$allColumnNames = array();
foreach ($board->getColumns() as $column) {
	$allColumnNames[] = "#" . $column->getName();
}
$columnNameString = join(", ", $allColumnNames);
?>
<header>
	<h1>Agile Sprint Board</h1>
</header>
<section id="board_container">
	<div id="board">
		<?php
		foreach ($board->getColumns() as $column) {
			include 'columnView.inc';
		}
		?>
	</div>
</section>
<script type="text/javascript">
$(function() {
    $("<?=$columnNameString?>").sortable({
      connectWith: ".connectedSortable"
      ,placeholder: "userStoryPlaceholder"
    }).disableSelection();
  });
</script>
<?php include "footerView.inc" ?>