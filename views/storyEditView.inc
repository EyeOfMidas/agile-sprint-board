<?php include "headerView.inc"?>
<form method="post" action="/?c=storysave">
	<div class="row">
		<label for="story">Story:</label>
		<textarea class="editable" id="story"></textarea>
	</div>
	<div class="row">
		<label for="details">Details:</label>
		<textarea class="editable" id="details"></textarea>
	</div>
	<div class="row">
		<label for="estimate">Estimate:</label><select id="estimate"
			name="estimate">
			<option value="0" selected="selected">-- Pick one --</option>
			<option value="1">1</option>
			<option value="2">2</option>
			<option value="3">3</option>
			<option value="5">5</option>
			<option value="8">8</option>
			<option value="13">13</option>
		</select>
	</div>
	<div class="row">
		<input type="submit" value="Save" />
	</div>
</form>
<?php include "footerView.inc"?>