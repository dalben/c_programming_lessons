<?php
require_once($_SERVER['DOCUMENT_ROOT'] . '/.lib/lib.php');
$body = task("First primes", 'first_primes.txt');
$body .= code('first_primes.c', true);
echo page($body);
?>
