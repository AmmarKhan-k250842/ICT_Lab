function Message()
{
    const marks = document.getElementById("mark").value;

    if (marks >= 90 && marks <= 100)
    {
        alert("Grade: A");
    }
    else if (marks >= 75 && marks <= 89)
    {
        alert("Grade: B");
    }
    else if (marks >= 50 && marks <= 74)
    {
        alert("Grade: C");
    }
    else if (marks < 50)
    {
        alert("Grade: Fail");
    }
}