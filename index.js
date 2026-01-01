<script>
const menuBtn = document.getElementById("menu-btn");
const closeBtn = document.getElementById("close-btn");
const sideMenu = document.getElementById("side-menu");

menuBtn.onclick = () => sideMenu.classList.add("active");
closeBtn.onclick = () => sideMenu.classList.remove("active");
</script>
