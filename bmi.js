// Accessing DOM Elements
let weightSlider = document.getElementById("myWeight");
let heightSlider = document.getElementById("myHeight");
let weightInput = document.getElementById("weightInput");
let heightInput = document.getElementById("heightInput");
let bmiResult = document.getElementById("bmiResult"); // Get the element to display BMI result

// Calculate BMI based on input
function calculateBMI() {
    let weight = parseFloat(weightInput.value);
    let height = parseFloat(heightInput.value) / 100; // Convert height to meters
    let bmi = weight / (height * height);
    bmiResult.textContent = "Your BMI is: " + bmi.toFixed(2); // Display BMI result
}
