const loadData = () => {
    fetch(`https://www.themealdb.com/api/json/v1/1/search.php?f=${document.getElementById("search-input").value}`)
    .then(res => res.json())
    .then(data => {
        document.getElementById("total").innerText = data.meals.length;
        displayData(data.meals);
    })
    .catch(error => console.error("Error fetching data:", error));
}

const displayData = (meals) => {
    console.log(meals);
    const mealContainer=document.getElementById("product_container");
    meals.forEach(dt => {
        console.log(dt)
        const card=document.createElement("div");
        card.classList.add("box");
        card.innerHTML=`
            <img class="imagse" src=${dt?.strMealThumb} alt="">
            <h2>${dt?.strMeal}</h2>
            <p></p>
            <button>details</button>

            
        `
        mealContainer.append(card)
    });
}

// Example usage:
// loadData();
