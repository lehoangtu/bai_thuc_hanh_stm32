 /* USER CODE BEGIN 2 */
  uint8_t status=0;
  /* USER CODE END 2 */
  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */
    /* USER CODE BEGIN 3 */
      if(HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13)==GPIO_PIN_RESET){
          status=~status;
          HAL_Delay(500);
      }
      if(status!=0){
          HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_2);
          HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_3);
          HAL_Delay(500);
      }
  }
  /* USER CODE END 3 */
