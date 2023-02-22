function main(parenteses) {
    let parentesesCount = [];
    
    for (let i = 0; i < parenteses.length; i++) {
        // console.log(parenteses, parentesesCount, "1")
        if (parenteses[i] === "(") {
             parentesesCount.push(parenteses[i]);
        }
        
        else if (parenteses[i] === ")") {
            if (parentesesCount[parentesesCount.length - 1] === "("){
                // console.log(parentesesCount[parentesesCount.length - 1], 2);
                parentesesCount.pop();
            }
            
            else {
                parentesesCount.push("#");
            }
        }
    }
   console.log(parentesesCount.length);
   return parentesesCount.length;   
}


let a = main("()))");
let b = main("()()");
let c = main("())(");