fn swap(v: &mut Vec<i32>, a: i32, b: i32) {
    let t = v[a as usize];
    v[a as usize] = v[b as usize];
    v[b as usize] = t;
}

fn partition(arr: &mut Vec<i32>, low: i32, high: i32) -> i32 {
    let pivot = arr[high as usize];
    let mut i = low - 1;

    for j in low..high {
        if arr[j as usize] <= pivot {
            i += 1;
            swap(&mut *arr, i, j);
        }
    }
    swap(&mut *arr, i+1, high);
    i + 1
}

fn quicksort(arr: &mut Vec<i32>, low: i32, high: i32) {
    if low < high {
        let pi = partition(&mut *arr, low, high);

        quicksort(&mut *arr, low, pi - 1);
        quicksort(&mut *arr, pi + 1, high);
    }
}

fn main() {
    let mut v: Vec<i32> = vec![10, 7, 8, 9, 1, 5];
    let n = v.len() as i32;
    quicksort(&mut v, 0, n-1);
    println!("{:?}", v);
}
