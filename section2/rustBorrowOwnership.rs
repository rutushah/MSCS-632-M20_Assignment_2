fn main() {
    // println!("Hello, world!");
    
    //assigning the integer value of 10 on heap
    let num = Box::new(10);
    
    //in print_by_borrow(), when we pass a reference, ownership does not move
    print_by_borrow(&num);
        println!("Still accessible in main: {}", num);

}

fn print_by_borrow(n: &Box<i32>){
         println!("Borrowed value: {}", n);
}