/*
x = 12
y = 12

let person = {
    name: "Askari",
    age: 19,
    type: "chutiya"
};

function add(num1, num2) 
{
    var result = num1 + num2
    console.log("The Addition result is: " + result);
}

function pp() 
{
    console.log("The name of the person is: " + person.name);
    console.log("The age of the person is: " + person.age);
    console.log("The type of the person is: " + person.type);
}

add(x, y)
pp()

let numArr = [2, 8, 21, 11, 1, 0, 6, 3]

function sort(arr)
{
    for(var i = 0; i < 8; i++)
    {
        for(var j = 0; j < 8; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j + 1]
                arr[j + 1] = arr[j]
                arr[j] = temp
            }
        }
    }

    console.log(arr);
};

sort(numArr);
*/




// TO DO LIST

/*
let tasks = []

function addTask(x)
{
    tasks.push(x)
    console.log("Task Added: " + x);
}

function removeTask(y)
{
    if(y < 0 || y > tasks.length)
    {
        console.log("Invalid Index, task not removed");
    }
    else if(y > 0 && y <= tasks.length)
    {
        console.log("Task Successfully Removed: " + tasks[y]);
        tasks.splice(y, 1)
    }
}

function showTasks()
{
    console.log(tasks)
}

function resetTask()
{
    tasks = []
    console.log("The array was successfully reset");
}


addTask("Complete PF lab assignment");
addTask("Complete ICT lab assignment");
addTask("Complete Calculus assignment");
addTask("Complete AP assignment");

showTasks();

removeTask(2);

showTasks();

resetTask();

showTasks();
*/

function login()
{
    let user = document.getElementById("username").value
    let pass = document.getElementById("password").value

    if(pass === "fast1234" && user === "admin")
    {
        document.getElementById("message").innerText = "Valid Password"
    }
    else
    {
        document.getElementById("message").innerText = "Invalid Password"
    }
}