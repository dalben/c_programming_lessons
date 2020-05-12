<?php
require_once($_SERVER['DOCUMENT_ROOT'] . '/.lib/lib.php');
$body = task("Even numbers", 'even_numbers.txt');
$body .= code('even_numbers.c', true);
echo page($body);
?>
