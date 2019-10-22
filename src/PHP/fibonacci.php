<?php


function fibo(int $n) {

    if ($n <= 1 ){
        return $n;
    }

    return fibo($n - 1) + fibo($n - 2);
}



$result = fibo(10);
print_r($result);