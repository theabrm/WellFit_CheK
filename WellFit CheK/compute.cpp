#include "headers.h"

void compute()
{
	// BMI Category 
	/* Reference: https://otsukahealth.com.ph/bmi-calculator/ */


	// BMI Comparison
	bmi = weight / (height * height);

	// BMI Comparison
	if (bmi < 18.5)
	{
		bmi_status = "Underweight";
	}

	else if (bmi >= 18.5 && bmi <= 24.9)
	{
		bmi_status = "Normal";
	}

	else if (bmi >= 25 && bmi <= 29.9)
	{
		bmi_status = "Overweight";
	}

	else if (bmi >= 30)
	{
		bmi_status = "Obese";
	}

	// Temperature Comparison
	if (temperature < 36.1)
	{
		temperature_status = "Below Normal";
	}

	else if (temperature >= 36.1 && temperature <= 37.2)
	{
		temperature_status = "Normal";
	}

	else if (temperature >= 37.3 && temperature <= 38.0)
	{
		temperature_status = "Slight Fever";
	}

	else if (temperature >= 38.1 && temperature <= 39.0)
	{
		temperature_status = "Fever";
	}

	else if (temperature >= 39.1 && temperature <= 40.0)
	{
		temperature_status = "High Fever";
	}

	else if (temperature > 40.0)
	{
		temperature_status = "Dangerous Fever";
	}

	// Heart rate comparison
	if (heart_rate < 60)
	{
		heart_rate_status = "Below Normal";
	}
	else if (heart_rate >= 60 && heart_rate <= 100)
	{
		heart_rate_status = "Normal";
	}
	else
	{
		heart_rate_status = "Above Normal";
	}
}