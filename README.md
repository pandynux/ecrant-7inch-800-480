# ESP32-S3 7" Waveshare - UI Moderne & Dashboard

Projet ESP-IDF/LVGL pour écran Waveshare 7" 800x480.

## Fonctionnalités
- Interface utilisateur moderne et tactile
- Dashboard graphique (jauges, courbes, boutons)
- Pages domotique (switch, slider), monitoring (graphe réel), paramètres (boutons réglages)
- Structure professionnelle ESP-IDF

## Compilation
- Installez ESP-IDF (>=v5)
- `idf.py set-target esp32s3`
- `idf.py menuconfig`
- `idf.py flash`

## Structure
- `main/` : logique UI, dashboard, navigation
- `components/lcd_driver/` : driver LCD ST7262 (à compléter)
- `components/touch_driver/` : driver tactile GT911 (à compléter)

## Extension
Ajoutez vos propres écrans, widgets, capteurs, etc.

## Auteur
pandynux
