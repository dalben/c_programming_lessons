<?php
require_once($_SERVER['DOCUMENT_ROOT'] . '/.lib/lib.php');
$body = task("Is it a prime?", 'is_prime.txt');
$body .= code('is_prime.c', true);
echo page($body);
?>
