<?php include "headerView.inc"?>
<div id="story-edit">
	<form method="post" action="/?c=storysave&s=<?=$story->getId()?>">
		<div class="row">
			<label for="story">Story:</label>
			<textarea class="editable" id="story" name="story"><?=$story->getText()?></textarea>
		</div>
		<div class="row">
			<label for="details">Details:</label>
			<textarea class="editable" id="details" name="details"><?=$story->getDetails()?></textarea>
		</div>
		<div class="row">
			<label for="estimate_id">Estimate:</label><select id="estimate_id" name="estimate_id">
				<option>-- Pick one --</option>
				<?php foreach($estimates as $estimate) { ?>
				<option value="<?=$estimate->getId()?>" <?=($story->getEstimateId() == $estimate->getId()) ? "selected=\"selected\"" : ""?>><?=$estimate->getDisplay()?></option>
				<?php } ?>
			</select>
		</div>
		<div class="row">
			<input type="submit" value="Save" />
		</div>
	</form>
</div>
<?php include "footerView.inc"?>