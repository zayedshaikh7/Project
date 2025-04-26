let stack=[];
let choise;
let value;
let rear=-1;
function push (){
    value=prompt("enter elem to insert");
    rear++;
    stack[rear]=value;
}
function pop (){
    if (stack.length === 0) {
        console.log("Stack is empty. Nothing to pop.");
    }else{  
    console.log("elem deleted");
    rear--;}
}
function diplay(){
    if (stack.length === 0) {
        console.log("Stack is empty. Nothing to pop.");
    }else{  

    for (i=0;i<=rear;i++){
        console.log(stack[i]);
    }}
}

function main() {
    while (true) {
        console.log("\n\n Select operation");
        console.log("1. push");
        console.log("2. pop");
        console.log("3. diplay");
        console.log("4. exit");
        choise = parseInt(prompt("Enter choice:"));
        
        switch (choise) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                console.log("Exiting the program.");
                return; // Exit the program
            default:
                console.log("Invalid option");
                break;
        }
    }
}

// zayed

