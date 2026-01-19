function increment_module(start){
    let counter = start;

    return function(step){
        counter += step;
        return counter;
    };
}

const counter = increment_module(5);
console.log(counter(2));  
console.log(counter(3)); 