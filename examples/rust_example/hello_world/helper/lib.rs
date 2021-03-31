#[no_mangle]
pub extern "C" fn my_function(val: u64) {
    println!("calling C function: {}", val);
}
