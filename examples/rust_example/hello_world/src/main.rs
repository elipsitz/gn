extern "C" {
    fn my_function(val: u64);
}


fn main() {
    println!("Hello world!");
    unsafe {
        my_function(1234);
    }
}
