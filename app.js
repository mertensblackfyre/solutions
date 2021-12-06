/*jshint esversion: 6 */

const nav = document.querySelector(".nav-toggle");
const list = document.querySelector(".list");

nav.addEventListener("click", () => {
  list.classList.toggle("show-list");
});
