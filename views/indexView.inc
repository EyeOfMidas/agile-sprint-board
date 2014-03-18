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
      connectWith: ".connectedSortable",
      placeholder: "userStoryPlaceholder",
      receive: function(event, ui) {
          console.log('change column', ui.item.parent().data("column_id"));
          $.post("/?c=changepos", {s:ui.item.data('story_id'), col: ui.item.parent().data("column_id"), i: ui.item.index()});
      },
      start: function(event, ui) {
          ui.item.startIndex = ui.item.index();
      },
      stop: function(event, ui) {
          console.log('change order ', ui.item.startIndex, ui.item.index());
    	  $.post("/?c=changepos", {s:ui.item.data('story_id'),  col: ui.item.parent().data("column_id"), si: ui.item.startIndex, i: ui.item.index()});
      }
    }).disableSelection();
  });
</script>
<?php include "footerView.inc" ?>