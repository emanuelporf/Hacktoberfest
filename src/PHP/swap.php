function swap1(&$x, &$y) {
   
    $x ^= $y ^= $x ^= $y;
}
function swap2(&$x, &$y) {
    list($x,$y) = array($y, $x);
}
function swap3(&$x, &$y) {
    $tmp=$x;
    $x=$y;
    $y=$tmp;
}
function swap4(&$x, &$y) {
    extract(array('x' => $y, 'y' => $x));
}
