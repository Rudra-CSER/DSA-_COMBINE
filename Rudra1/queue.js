// queue js 

// //In Computer Science a queue is an abstract Data Structure where items are kept in order. New items can be added at the back of the queue and old items are taken off from the front of the queue.


//Q.1 (queue Exaple Using Array )

// Write a function nextInLine which takes an array (arr) and a number (item) as arguments.
// Add the number to the end of the array, then remove the first element of the array.
// The nextInLine function should then return the element that was removed.

function nextInLine(arr, item) {
    // Only change code below this line
    arr.push(item)
    return arr.shift(); //1st Arrry Goes to the shifted to
    // Only change code above this line
  }
  
  // Setup
  let testArr = [1, 2, 3, 4, 5];
  
  // Display code
  console.log("Before: " + JSON.stringify(testArr));
  console.log(nextInLine(testArr, 6));
  console.log("After: " + JSON.stringify(testArr));
  console.log("Before: " + JSON.stringify(testArr));
  console.log(nextInLine(testArr, 7));
  console.log("After: " + JSON.stringify(testArr));
  console.log("Before: " + JSON.stringify(testArr));
  console.log(nextInLine(testArr, 9));
  console.log("After: " + JSON.stringify(testArr));