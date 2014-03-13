<html>
<head>
<title>Agile Sprint Board</title>
</head>
<link rel="stylesheet" media="screen" href="css/main.css" />
<link rel="stylesheet" href="//ajax.googleapis.com/ajax/libs/jqueryui/1.10.4/themes/smoothness/jquery-ui.css" />
<script src="//ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js"></script>
<script src="//ajax.googleapis.com/ajax/libs/jqueryui/1.10.4/jquery-ui.min.js"></script>
<script type="text/javascript" >
$(function() {
	$('.storyNav a').click(function() {
		console.log('link clicked');
	});
    $( "#backlog, #todo, #inprogress, #done" ).sortable({
      connectWith: ".connectedSortable"
      ,placeholder: "userStoryPlaceholder"
    }).disableSelection();
  });
</script>
<body>