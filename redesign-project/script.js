let lastScrollY = window.scrollY;
const navbar = document.getElementById("navbar");

window.addEventListener("scroll", () => {
  if (window.scrollY > lastScrollY) {
    // scroll ke bawah
    navbar.classList.add("hide");
  } else {
    // scroll ke atas
    navbar.classList.remove("hide");
  }

  lastScrollY = window.scrollY;
});

const greetings = [
  "Hello",
  "Halo",
  "你好",
  "Bonjour",
  "नमस्ते",
  "Hola",
  "Привет",
  "Hallo",
  "مرحبا",
  "Ciao",
  "こんにちは",
  "Olá",
  "안녕하세요",
  "Merhaba"
];

let index = 0;
const greetingEl = document.getElementById("greeting");

console.log(greetingEl); // 🔍 debug

setInterval(() => {
  greetingEl.style.opacity = 0;

  setTimeout(() => {
  index = (index + 1) % greetings.length;
  greetingEl.textContent = greetings[index];
  greetingEl.style.opacity = 1;
}, 300);
}, 1500);

// show/hide side panel

const menuButton = document.getElementById("menu-button");
const closeButton = document.getElementById("closeBtn");
const sidePanel = document.getElementById("sidePanel");

menuButton.addEventListener("click", () => {
  sidePanel.classList.add("active");
});

closeButton.addEventListener("click", () => {
  sidePanel.classList.remove("active");
});
``