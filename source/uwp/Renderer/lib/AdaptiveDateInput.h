#pragma once

#include "AdaptiveCards.XamlCardRenderer.h"
#include "DateInput.h"
#include "Enums.h"

namespace AdaptiveCards { namespace XamlCardRenderer
{
    class AdaptiveDateInput :
        public Microsoft::WRL::RuntimeClass<
            Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
            ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveDateInput,
            ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveInputElement,
            ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveCardElement>
    {
        InspectableClass(RuntimeClass_AdaptiveCards_XamlCardRenderer_AdaptiveDateInput, BaseTrust)

    public:
        HRESULT RuntimeClassInitialize() noexcept;
        HRESULT RuntimeClassInitialize(_In_ const std::shared_ptr<AdaptiveCards::DateInput>& sharedDateInput);

        // IAdaptiveDateInput
        IFACEMETHODIMP get_Max(_Out_ HSTRING* max);
        IFACEMETHODIMP put_Max(_In_ HSTRING max);

        IFACEMETHODIMP get_Min(_Out_ HSTRING* min);
        IFACEMETHODIMP put_Min(_In_ HSTRING min);

        IFACEMETHODIMP get_Placeholder(_Out_ HSTRING* placeholder);
        IFACEMETHODIMP put_Placeholder(_In_ HSTRING placeholder);

        IFACEMETHODIMP get_Value(_Out_ HSTRING* value);
        IFACEMETHODIMP put_Value(_In_ HSTRING value);

        // IAdaptiveInputElement
        IFACEMETHODIMP get_Id(_Out_ HSTRING* id);
        IFACEMETHODIMP put_Id(_In_ HSTRING id);

        IFACEMETHODIMP get_IsRequired(_Out_ boolean* isRequired);
        IFACEMETHODIMP put_IsRequired(_In_ boolean isRequired);

        // IAdaptiveCardElement
        IFACEMETHODIMP get_ElementType(_Out_ ABI::AdaptiveCards::XamlCardRenderer::ElementType* elementType);

        IFACEMETHODIMP get_Separation(_Out_ ABI::AdaptiveCards::XamlCardRenderer::SeparationStyle* separation);
        IFACEMETHODIMP put_Separation(_In_ ABI::AdaptiveCards::XamlCardRenderer::SeparationStyle separation);

        IFACEMETHODIMP get_Speak(_Out_ HSTRING *speak);
        IFACEMETHODIMP put_Speak(_In_ HSTRING speak);

    private:
        std::shared_ptr<AdaptiveCards::DateInput> m_sharedDateInput;
    };

    ActivatableClass(AdaptiveDateInput);
}}