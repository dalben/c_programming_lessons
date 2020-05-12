<?php

function task($task_title, $task) {
  return "<pre><h1>" . $task_title . "</h1>" . file_get_contents($task) . "</pre>";
}

function code($filename, $hidden) {


  return "<script>
    function myFunction() {
      var x = document.getElementById(\"code\");
      if (x.style.display === \"none\") {
        x.style.display = \"block\";
} else {
  x.style.display = \"none\";
}
}
</script>
<button onclick=\"myFunction()\">Show/hide solution</button>
<div id=\"code\" " . ($hidden ? "style=\"display: none\"" : "") . ">
<pre><code class=\"c-html\">" . file_get_contents($filename) . "</code></pre>
<form method=\"get\" action=\"$filename\">
    <button type=\"submit\">Download</button>
    </form>
</div>
";
}


function page($body) {
  return  " 
    <html>
    <head>
    <link href=\"https://fonts.googleapis.com/css2?family=Roboto:wght@300&display=swap\" rel=\"stylesheet\">
    <style>
    pre, button {
    font-family: 'Roboto', sans-serif;
}
</style>
  <link rel=\"stylesheet\"
  href=\"//cdnjs.cloudflare.com/ajax/libs/highlight.js/10.0.2/styles/default.min.css\">
  <script src=\"//cdnjs.cloudflare.com/ajax/libs/highlight.js/10.0.2/highlight.min.js\"></script>
<script>hljs.initHighlightingOnLoad();</script>
</head>
<body>" . $body . "
</body>
</html>";
}
?>
