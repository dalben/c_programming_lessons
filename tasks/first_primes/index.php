<?php
require_once($_SERVER['DOCUMENT_ROOT'] . '/.lib/lib.php');
$body = task("First primes", 'first_primes.txt');
echo page($body);
?>
