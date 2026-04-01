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

  // 🟢 SET GO LIVE TIME (WIB)
  const goLiveTime = new Date('2026-04-01T00:00:00').getTime();

  function updateCounter() {
    const now = Date.now();
    let diffSeconds = Math.floor((now - goLiveTime) / 1000);

    if (diffSeconds < 0) {
      document.getElementById('live-counter').innerText = 'Not live yet';
      return;
    }

    const days = Math.floor(diffSeconds / 86400);
    diffSeconds %= 86400;

    const hours = Math.floor(diffSeconds / 3600);
    diffSeconds %= 3600;

    const minutes = Math.floor(diffSeconds / 60);
    const seconds = diffSeconds % 60;

    document.getElementById('live-counter').innerText =
      `This website is now running ${days} days ${String(hours).padStart(2, '0')} hours ` +
      `${String(minutes).padStart(2, '0')} minutes ` +
      `${String(seconds).padStart(2, '0')} seconds`;
  }

  // Update rutin
  setInterval(updateCounter, 1000);
  updateCounter(); // render awal