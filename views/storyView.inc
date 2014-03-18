<li class="userStory">
	<div class="estimate"><?=$story->getEstimate()?></div>
	<p class="story"><?=$story->getText()?></p>
	<p class="details"><?=$story->getDetails()?></p>
	<div class="storyNav">
		<a href="javascript:;">Details</a> | <a href="/?c=storyedit&s=<?=$story->getId()?>">Edit</a>
	</div>
</li>