<?php include "headerView.inc"?>
<div id="story-edit">
	<form method="post" action="/?c=storysave">
		<div class="row">
			<label for="story">Story:</label>
			<textarea class="editable" id="story"><?=$story['text']?></textarea>
		</div>
		<div class="row">
			<label for="details">Details:</label>
			<textarea class="editable" id="details"><?=$story['details']?></textarea>
		</div>
		<div class="row">
			<label for="estimate">Estimate:</label><select id="estimate" name="estimate">
				<option>-- Pick one --</option>
				<?php foreach($estimates as $estimate) { ?>
				<option value="<?=$estimate?>" <?=($story['estimate'] == $estimate) ? "selected=\"selected\"" : ""?>><?=$estimate?></option>
				<?php } ?>
			</select>
		</div>
		<div class="row">
			<input type="submit" value="Save" />
		</div>
	</form>
</div>
<?php include "footerView.inc"?>